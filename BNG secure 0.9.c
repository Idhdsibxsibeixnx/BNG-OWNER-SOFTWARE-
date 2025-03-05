import os
import sys
import time
from datetime import datetime, timedelta
import random

# Define colors using ANSI escape sequences
RESET = "\033[0m"
BOLD = "\033[1m"
BRIGHT_GREEN = "\033[92m"
BRIGHT_MAGENTA = "\033[95m"
BRIGHT_BLUE = "\033[94m"
BRIGHT_CYAN = "\033[96m"
BRIGHT_YELLOW = "\033[93m"
BRIGHT_RED = "\033[91m"
BROWN = "\033[38;5;94m"  # ANSI code for brown color

# Function to show animated loading
def animated_loading(message, duration=3):
    chars = ["|", "/", "-", "\\"]
    start_time = time.time()
    while time.time() - start_time < duration:
        for char in chars:
            sys.stdout.write(f"\r{BRIGHT_YELLOW}{BOLD}{message} {char}{RESET}")
            sys.stdout.flush()
            time.sleep(0.2)
    sys.stdout.write("\r" + " " * (len(message) + 2) + "\r")  # Clear line

# Function for user authentication
def login():
    correct_username = "BNG"
    correct_password = "BNG_TRADER"

    while True:
        print(f"{BOLD}{BRIGHT_CYAN}🔐 LOGIN REQUIRED{RESET}")
        username = input(f"{BRIGHT_YELLOW}Enter Username: {RESET}")
        password = input(f"{BRIGHT_YELLOW}Enter Password: {RESET}")

        # Loading animation
        animated_loading("Verifying Credentials", duration=2)

        if username == correct_username and password == correct_password:
            print(f"{BRIGHT_GREEN}{BOLD}✅ Access Granted! Welcome, {username}!{RESET}\n")
            break
        else:
            print(f"{BRIGHT_RED}{BOLD}❌ Invalid Username or Password! Try again.{RESET}\n")

# Clear the screen
os.system('cls' if os.name == 'nt' else 'clear')

# Call the login function
login()

# Display the first banner
today_date = datetime.now().strftime("%m - %d - %Y")

print(f"{BROWN}{BOLD}")
print("⠀⠀⠀⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀")
print("⠀⠀⠀⠀⡰⠀⠀⠀⠠⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⢣⠀⠀⠀⠀")
print("⠀⠀⠀⢠⡇⠀⠀⠀⡸⠀⠀⠀⠀⠀⠀⠀⠀⢂⠀⠀⠀⢸⡆⠀⠀⠀")
print("⠀⠀⠀⠸⣿⣄⠀⠀⠇⠀⠀⢀⠀⠀⡀⠀⠀⢸⠂⠀⣠⣿⠧⠀⠀⠀")
print("⠀⠀⠀⠀⠈⠓⢵⡄⠸⡀⠀⣠⣶⣦⣁⠀⢀⠆⢠⡮⠚⠁⠀⠀⠀⠀")
print("⠀⠀⠀⠀⣀⣀⠀⠙⢤⡳⣸⣿⣿⣿⣿⣇⣜⡤⠋⠀⣀⣀⠀⠀⠀⠀")
print("⠀⠀⠀⣴⡿⠛⠛⠓⣺⠙⣾⣻⣿⣿⣟⣷⢋⣵⠚⠛⠛⢿⣦⠀⠀⠀")
print("⠀⢀⡼⠋⠀⠀⣠⠿⠿⣿⢿⣡⣻⠯⣨⡿⣿⠽⠻⣄⠀⠀⠙⢧⡀⠀")
print("⠀⡼⠁⢀⣴⠞⠁⢀⣼⢟⣿⣻⠛⠛⣟⠻⡫⢧⣀⠈⠻⣦⡀⠈⢯⠀")
print("⢠⠃⢰⡿⠃⣠⣴⠞⢡⠃⣼⠃⣦⣶⠘⢿⠈⡄⠑⣵⣄⠈⢿⡆⠘⡆")
print("⡹⠀⢸⠃⢸⣿⠇⠀⠈⢠⡏⠀⠍⠙⠀⢱⡆⠀⠀⠈⣿⡗⠘⡇⠀⢫")
print("⠀⠀⡼⠄⠘⣿⠀⠀⢠⣿⠀⠀⠀⠀⠃⠀⣿⡄⠀⠀⣿⠃⠀⢷⠀⠀")
print("⠈⠀⠁⠀⠀⢹⡄⠀⢹⣏⠀⠀⠀⠀⠀⠀⢸⡏⠀⢀⡟⠀⠀⠘⠀⠃")
print("⠀⠀⠈⠀⠀⠸⡏⠀⠀⢿⡀⠀⠀⠀⠀⢀⡾⠀⠀⢈⠇⠀⢀⠂⠀⠀")
print("⠀⠀⠀⠀⠀⠀⠡⠀⠀⠘⡄⠀⠀⠀⠀⢀⠇⠀⠀⡌⠀⠀⠀⠀⠀⠀")
print("⠀⠀⠀⠀⠀⠀⠀⠁⠀⠀⠐⡀⠀⠀⢀⠂⠀⠀⠐⠀⠀⠀⠀⠀⠀⠀")
print("⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀")
print(f"{RESET}")

# Display the second banner
print(f"\n{BRIGHT_RED}{BOLD}< < ─────────── > > BNG X SOFTWARE  < < ─────────── > >")
print(f"< < ─────────── > > TELEGRAM : @BNG_TRADER < < ─────────── > >")
print(f"< < ─────────── > > DEVELOPER   BY   BNG X < < ─────────── > >")
print(f"< < ─────────── > > WOULD UNIT 2 < <───────────> >")
print(f"{BRIGHT_BLUE}                                 SINCE  {today_date}")
print(f"{BRIGHT_GREEN}---------------------------------------------------------------------")
print(f"---------------------------------------------------------------------{RESET}")

# Market pairs
OTC_MARKET_PAIR = [
    f"{BRIGHT_YELLOW}NZD/CHF-OTC", f"{BRIGHT_MAGENTA}USDEGP OTC", f"{BRIGHT_CYAN}USDINR OTC", f"{BRIGHT_RED}USDIDR OTC", 
    f"{BRIGHT_GREEN}USDPKR OTC", f"{BRIGHT_BLUE}USDBDT OTC", f"{BRIGHT_YELLOW}USDNGN OTC", f"{BRIGHT_MAGENTA}USDDZD OTC", 
    f"{BRIGHT_CYAN}USDZAR OTC", f"{BRIGHT_RED}USDARS OTC", f"{BRIGHT_GREEN}USDCOP OTC", f"{BRIGHT_BLUE}PEPE OTC", 
    f"{BRIGHT_YELLOW}DOGE OTC", f"{BRIGHT_MAGENTA}INTEL OTC", f"{BRIGHT_CYAN}FB OTC OTC", 
    f"{BRIGHT_RED}USDBRL OTC", f"{BRIGHT_GREEN}USDMXN OTC", f"{BRIGHT_BLUE}EURCAD OTC"
]

REAL_MARKET_PAIR = [
    f"{BRIGHT_YELLOW}EUR/GBP", f"{BRIGHT_MAGENTA}EUR/USD", f"{BRIGHT_CYAN}USD/CAD", f"{BRIGHT_RED}USD/JPY", 
    f"{BRIGHT_GREEN}EUR/JPY", f"{BRIGHT_BLUE}EUR/CAD", f"{BRIGHT_YELLOW}GBP/AUD", f"{BRIGHT_MAGENTA}CAD/JPY", 
    f"{BRIGHT_CYAN}AUD/JPY", f"{BRIGHT_RED}AUD/CAD", f"{BRIGHT_GREEN}AUD/USD", f"{BRIGHT_BLUE}GBP/USD", 
    f"{BRIGHT_YELLOW}GBP/CHF", f"{BRIGHT_MAGENTA}USD/CHF"
]

# Display market type options
print(f"\n{BRIGHT_CYAN}{BOLD}Choose a market type:{RESET}")
print(f"{BRIGHT_YELLOW}{BOLD}1: QUOTEX OTC{RESET}")
print(f"{BRIGHT_YELLOW}{BOLD}2: REAL MARKET{RESET}")
market_choice = input("Enter your choice (1/2): ")

# Validate choice and select pairs
if market_choice == "1":
    selected_market = "OTC MARKET"
    pairs = OTC_MARKET_PAIR
elif market_choice == "2":
    selected_market = "REAL MARKET"
    pairs = REAL_MARKET_PAIR
else:
    print(f"{BRIGHT_MAGENTA}{BOLD}Invalid choice! Defaulting to OTC MARKET.{RESET}")
    selected_market = "OTC MARKET"
    pairs = OTC_MARKET_PAIR

# Display the selected market and pairs
print(f"\n{BRIGHT_GREEN}{BOLD}Selected Market: {selected_market}{RESET}")
print(f"\n{BRIGHT_BLUE}{BOLD}Available Pairs:{RESET}")

# Display pairs in 3 vertical columns
column_width = len(pairs) // 3 + (len(pairs) % 3 > 0)
for i in range(column_width):
    left = f"{i + 1}. {pairs[i]:<20}"
    middle = f"{i + column_width + 1}. {pairs[i + column_width]:<20}" if i + column_width < len(pairs) else ""
    right = f"{i + 2 * column_width + 1}. {pairs[i + 2 * column_width]:<20}" if i + 2 * column_width < len(pairs) else ""
    print(f"{BRIGHT_GREEN}{BOLD}{left}{middle}{right}{RESET}")

# Pair selection
pair_choice = input(f"\n{BRIGHT_MAGENTA}{BOLD}Enter pair numbers separated by commas (e.g., 1,2,3) or 'ALL': {RESET}")
if pair_choice.upper() == "ALL":
    selected_pairs = pairs
else:
    selected_pairs = [pairs[int(i) - 1] for i in pair_choice.split(",")]

# Mode selection
print(f"\n{BRIGHT_CYAN}{BOLD}Available Modes:{RESET}")
print(f"{BRIGHT_YELLOW}1: Blackout{RESET}")
print(f"{BRIGHT_YELLOW}2: Normal{RESET}")
mode_choice = input("Enter the number corresponding to the mode: ")

# Validate mode
if mode_choice == "1":
    selected_mode = "Blackout"
elif mode_choice == "2":
    selected_mode = "Normal"
else:
    print(f"{BRIGHT_MAGENTA}{BOLD}Invalid choice! Defaulting to Normal mode.{RESET}")
    selected_mode = "Normal"

# Filter selection
print(f"\n{BRIGHT_CYAN}{BOLD}Available Filters:{RESET}")
print(f"{BRIGHT_YELLOW}1: Humanized Filter{RESET}")
print(f"{BRIGHT_YELLOW}2: Follow Trend{RESET}")
filter_choice = input("Enter the number corresponding to the filter: ")

# Validate filter
if filter_choice == "1":
    selected_filter = "Humanized Filter"
elif filter_choice == "2":
    selected_filter = "Follow Trend"
else:
    print(f"{BRIGHT_MAGENTA}{BOLD}Invalid choice! Defaulting to Follow Trend.{RESET}")
    selected_filter = "Follow Trend"

# Backtest Filter Selection
print(f"\n{BRIGHT_YELLOW}{BOLD}Backtest Filter Options:{RESET}")
print(f"{BRIGHT_GREEN}1. (10-20 days){RESET}  {BRIGHT_CYAN}2. (25-35 days){RESET}  {BRIGHT_MAGENTA}3. (50-60 days){RESET}")
backtest_filter_choice = input("Select a Backtest Filter (1/2/3): ")

# Validate Backtest Filter Choice
if backtest_filter_choice == "1":
    selected_backtest_filter = "10-20 days"
elif backtest_filter_choice == "2":
    selected_backtest_filter = "25-35 days"
elif backtest_filter_choice == "3":
    selected_backtest_filter = "50-60 days"
else:
    print(f"{BRIGHT_MAGENTA}{BOLD}Invalid choice! Defaulting to 10-20 days.{RESET}")
    selected_backtest_filter = "10-20 days"

# Display selected backtest filter
print(f"\n{BRIGHT_GREEN}{BOLD}Selected Backtest Filter: {selected_backtest_filter}{RESET}")

# Strategy selection
strategy_choice = input(f"\n{BRIGHT_CYAN}{BOLD}Enter your strategy choice (1: RSE, 2: MCD, 3: ATR, 4: ROVING AVERAGE, 5: S. ACTIVE ALL): {RESET}")

# Validate strategy choice
if strategy_choice == "1":
    selected_strategy = "RSE"
elif strategy_choice == "2":
    selected_strategy = "MCD"
elif strategy_choice == "3":
    selected_strategy = "ATR"
elif strategy_choice == "4":
    selected_strategy = "ROVING AVERAGE"
elif strategy_choice == "5":
    selected_strategy = "S. ACTIVE ALL"
else:
    print(f"{BRIGHT_MAGENTA}{BOLD}Invalid choice! Defaulting to S. ACTIVE ALL.{RESET}")
    selected_strategy = "S. ACTIVE ALL"

# Display selected mode, filter, and strategy
print(f"\n{BRIGHT_GREEN}{BOLD}Selected Mode: {selected_mode}{RESET}")
print(f"{BRIGHT_GREEN}{BOLD}Selected Filter: {selected_filter}{RESET}")
print(f"{BRIGHT_GREEN}{BOLD}Selected Strategy: {selected_strategy}{RESET}")

# Signal generation function
def generate_signal():
    return random.choice(['CALL', 'PUT'])

def generate_signals_for_multiple_pairs(total_signals, start_time, end_time, selected_pairs):
    current_time = datetime.strptime(start_time, "%H:%M")
    end_time_obj = datetime.strptime(end_time, "%H:%M")
    signals = []
    
    while current_time <= end_time_obj and len(signals) < total_signals:
        for pair in selected_pairs:
            if len(signals) >= total_signals:
                break
            signal_time = current_time.strftime("%H:%M")
            direction = generate_signal()
            signals.append(f"{pair} > {signal_time} > {direction}")
            
            # Randomize time between signals
            current_time += timedelta(minutes=random.randint(1, 5))
    return signals

# Get signal generation inputs
print(f"\n{BRIGHT_YELLOW}{BOLD}Signal Generation Details:{RESET}")
num_signals = int(input(f"{BRIGHT_BLUE}How many signals do you want: {RESET}"))
start_time = input(f"{BRIGHT_CYAN}Start time (HH:MM): {RESET}")
end_time = input(f"{BRIGHT_CYAN}End time (HH:MM): {RESET}")

# Generate signals
print(f"\n{BRIGHT_MAGENTA}Generating signals...{RESET}")
signals = generate_signals_for_multiple_pairs(num_signals, start_time, end_time, selected_pairs)

# Display signals
print(f"\n{BRIGHT_GREEN}{BOLD}Generated Signals:{RESET}")
for signal in signals:
    print(f"{BOLD}{signal}{RESET}")