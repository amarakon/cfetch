/* Forward-declare our functions so users can mention them in their
 * configs at the top of the file rather than near the bottom. */

static char *get_title(),
            *get_bar(),
            *get_os(),
            *get_kernel(),
            *get_host(),
            *get_uptime(),
            *get_packages_dnf_selected(),
            *get_packages_dnf_total(),
            *get_packages_dpkg_selected(),
            *get_packages_dpkg_total(),
            *get_packages_pacman_selected(),
            *get_packages_pacman_total(),
            *get_packages_portage_selected(),
            *get_packages_portage_total(),
            *get_shell_default(),
            *get_shell_running(),
            *get_resolution(),
            *get_terminal(),
            *get_cpu(),
            *get_gpu1(),
            *get_gpu2(),
            *get_memory(),
            *get_disk_usage_root(),
            *get_disk_usage_home(),
            *get_colors1(),
            *get_colors2(),
            *spacer();

#define SPACER {"", spacer, false},
#define REMOVE(A) { (A), NULL, sizeof(A) - 1 , 0 }
#define REPLACE(A, B) { (A), (B), sizeof(A) - 1, sizeof(B) - 1 }
