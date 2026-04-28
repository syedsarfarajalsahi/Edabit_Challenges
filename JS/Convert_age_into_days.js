function calc_age(age_in_years) {
    // Assume all those years have only 365 days. We ignore leap years
    // inorder not to make it complicated in coding
    const age_in_days = age_in_years * 365;
    console.log(age_in_years + ' years old is equals to ' + age_in_days + ' days old');
}

calc_age(20);