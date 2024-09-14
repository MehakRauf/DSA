import random

class Process:
    def __init__(self, PN, PC, IR, AT, ET, FT, RI, State, SA, PSRI, PSRA, i):
        self.PN = PN
        self.PC = PC
        self.IR = IR
        self.AT = AT
        self.ET = ET
        self.FT = FT
        self.RI = RI
        self.State = State
        self.SA = SA
        self.PSRI = PSRI
        self.PSRA = PSRA
        self.i = i
        self.remaining_time = ET
        self.resume_index = 0

    def print_pcb(self):
        print(f"Process Control Block : {self.PN}")
        print(f"Process Id : {self.PN}")
        print(f"Program Counter : {self.PC}")
        print(f"Instruction Register: {self.IR}")
        print(f"Arrival Time : {self.AT}")
        print(f"Execution Time : {self.ET}")
        print(f"Finish Time : {self.FT}")
        print(f"Resource Info : {self.RI}")
        print(f"State : {self.State}")
        print(f"Scheduling Algorithm: {self.SA}")
        print(f"PSW (Resume Instruction) : {self.PSRI}")
        print(f"PSW (Resume Instruction Address) : {self.PSRA}")
        print()

    def run(self, quantum_size, execution_logs):
        if self.remaining_time > 0:
            executed_time = min(quantum_size, self.remaining_time)
            executed_elements = arrays[self.i][self.resume_index:self.resume_index + executed_time]
            self.remaining_time -= executed_time
            self.resume_index += executed_time
            self.PSRI = arrays[self.i][self.resume_index - 1] if self.resume_index > 0 else 0
            self.PSRA = self.resume_index - 1

            # Log the execution details
            log_entry = f"{self.PN} executed {executed_elements}"
            execution_logs.append(log_entry)
            
            self.print_pcb()
            if self.remaining_time == 0:
                self.FT = self.resume_index
                print(f"Process {self.PN} is completed.")
            else:
                print(f"Process {self.PN} will resume from index {self.resume_index}")
            print()

def create_process_class(PN, PC, IR, AT, ET, FT, RI, State, SA, PSRI, PSRA, i):
    class CustomProcess(Process):
        def __init__(self):
            super().__init__(PN, PC, IR, AT, ET, FT, RI, State, SA, PSRI, PSRA, i)
    return CustomProcess

num_arrays = int(input("Enter the number of arrays you want to create which must be less than or equal to 5: "))
quantum_size = int(input("Enter quantum size: "))
while quantum_size > 3:
    print("Size must be less than or equal to 3. Please try again.")
    quantum_size = int(input("Enter quantum size: "))

arrays = []
for i in range(num_arrays):
    execution_time = int(input(f"Enter the size of array {i + 1} (must be less than or equal to 10): "))
    while execution_time > 10:
        print("Size must be less than or equal to 10. Please try again.")
        execution_time = int(input(f"Enter the size of array {i + 1} (must be less than or equal to 10): "))
    array = [random.randint(0, 100) for _ in range(execution_time)]
    arrays.append(array)

def print_table():
    headers = ["Process", "Execution", "Arrival"]
    print(f"{headers[0].ljust(10)}| {headers[1].ljust(15)}| {headers[2].ljust(7)}")
    print("-" * 35)
    for idx, array in enumerate(arrays, 1):
        process_name = f"P{idx - 1}:{array}"
        execution = str(len(array))
        arrival = str(idx - 1)
        print(f"{process_name.ljust(10)}| {execution.ljust(15)}| {arrival.ljust(7)}")

print_table()

processes = []
for i in range(num_arrays):
    PN = f"P{i}"
    PC = random.randint(0, 10)
    IR = random.randint(0, 10)
    AT = i
    ET = len(arrays[i])
    FT = 0
    RI = "Resource Info"
    State = "Ready/Running"
    SA = "Round Robin"
    PSRI = 0
    PSRA = 0

    process_class = create_process_class(PN, PC, IR, AT, ET, FT, RI, State, SA, PSRI, PSRA, i)
    process_instance = process_class()
    processes.append(process_instance)

process_index = 0
execution_logs = []  # List to keep track of execution logs

while any(p.remaining_time > 0 for p in processes):
    process = processes[process_index]
    process.run(quantum_size, execution_logs)
    process_index = (process_index + 1) % num_arrays

print("Execution Logs:")
for log in execution_logs:
    print(log)
