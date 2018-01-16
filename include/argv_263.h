/* 
   This argv_1982 argv_1424 converts all MPI_ names into PMPI_ names, for use
   in providing a profiling interface 
 */
#if defined(MPI_BUILD_PROFILING)

#undef argv_2645
#define argv_2645 argv_3970
#undef argv_2647
#define argv_2647 argv_3972
#undef argv_2650
#define argv_2650 argv_3973
#undef argv_2651
#define argv_2651 argv_3974
#undef argv_2653
#define argv_2653 argv_3976
#undef argv_2654
#define argv_2654 argv_3977
#undef argv_2655
#define argv_2655 argv_3978
#undef argv_2658
#define argv_2658 argv_3979
#undef MPI_Attr_get
#define MPI_Attr_get PMPI_Attr_get
#undef argv_2659
#define argv_2659 argv_3980
#undef argv_2661
#define argv_2661 argv_3981
#undef argv_2662
#define argv_2662 argv_3982
#undef argv_2665
#define argv_2665 argv_3983
#undef argv_2666
#define argv_2666 argv_3984
#undef argv_2668
#define argv_2668 argv_3985
#undef argv_2669
#define argv_2669 argv_3986
#undef argv_2672
#define argv_2672 argv_3987
#undef argv_2674
#define argv_2674 argv_3988
#undef argv_2675
#define argv_2675 argv_3989
#undef MPI_Cart_get
#define MPI_Cart_get PMPI_Cart_get
#undef argv_2676
#define argv_2676 argv_3990
#undef argv_2677
#define argv_2677 argv_3991
#undef argv_2678
#define argv_2678 argv_3992
#undef argv_2679
#define argv_2679 argv_3993
#undef MPI_Cartdim_get
#define MPI_Cartdim_get PMPI_Cartdim_get
#undef argv_2694
#define argv_2694 argv_3997
#undef argv_2696
#define argv_2696 argv_3999
#undef argv_2700
#define argv_2700 argv_4003
#undef argv_2703
#define argv_2703 argv_4004
#undef argv_2708
#define argv_2708 argv_4009
#undef argv_2713
#define argv_2713 argv_4011
#undef argv_2714
#define argv_2714 argv_4012
#undef argv_2715
#define argv_2715 argv_4013
#undef argv_2719
#define argv_2719 argv_4016
#undef argv_2722
#define argv_2722 argv_4019
#undef argv_2723
#define argv_2723 argv_4020
#undef argv_2731
#define argv_2731 argv_4021
#undef argv_2791
#define argv_2791 argv_4022
#undef argv_2793
#define argv_2793 argv_4023
#undef MPI_Errhandler_get
#define MPI_Errhandler_get PMPI_Errhandler_get
#undef MPI_Errhandler_set
#define MPI_Errhandler_set PMPI_Errhandler_set
#undef argv_2796
#define argv_2796 argv_4024
#undef argv_2797
#define argv_2797 argv_4025
#undef argv_2849
#define argv_2849 argv_4071
#undef argv_2856
#define argv_2856 argv_4074
#undef argv_2857
#define argv_2857 argv_4075
#undef MPI_Get_count
#define MPI_Get_count PMPI_Get_count
#undef argv_2859
#define argv_2859 argv_4077
#undef argv_2860
#define argv_2860 argv_4078
#undef argv_2861
#define argv_2861 argv_4079
#undef argv_2863
#define argv_2863 argv_4080
#undef MPI_Graph_get
#define MPI_Graph_get PMPI_Graph_get
#undef argv_2864
#define argv_2864 argv_4081
#undef argv_2865
#define argv_2865 argv_4082
#undef MPI_Graph_neighbors_count
#define MPI_Graph_neighbors_count PMPI_Graph_neighbors_count
#undef MPI_Graphdims_get
#define MPI_Graphdims_get PMPI_Graphdims_get
#undef argv_2869
#define argv_2869 argv_4084
#undef argv_2870
#define argv_2870 argv_4085
#undef argv_2872
#define argv_2872 argv_4086
#undef argv_2874
#define argv_2874 argv_4087
#undef argv_2875
#define argv_2875 argv_4088
#undef argv_2876
#define argv_2876 argv_4089
#undef argv_2878
#define argv_2878 argv_4090
#undef argv_2879
#define argv_2879 argv_4091
#undef argv_2880
#define argv_2880 argv_4092
#undef argv_2881
#define argv_2881 argv_4093
#undef argv_2882
#define argv_2882 argv_4094
#undef argv_2883
#define argv_2883 argv_4095
#undef argv_2886
#define argv_2886 argv_4096
#undef argv_2889
#define argv_2889 argv_4097
#undef argv_2890
#define argv_2890 argv_4098
#undef argv_2891
#define argv_2891 argv_4099
#undef argv_2892
#define argv_2892 argv_4100
#undef argv_2893
#define argv_2893 argv_4101
#undef argv_2894
#define argv_2894 argv_4102
#undef MPI_Info_get
#define MPI_Info_get PMPI_Info_get
#undef argv_2895
#define argv_2895 argv_4103
#undef argv_2896
#define argv_2896 argv_4104
#undef argv_2897
#define argv_2897 argv_4105
#undef MPI_Info_set
#define MPI_Info_set PMPI_Info_set
#undef argv_2899
#define argv_2899 argv_4106
#ifndef STRICT_MPI
/* This is a special hack to catch inconsistent library and argv_1982 
   versions */
#undef argv_2901
#define argv_2901 PMPI_Init_vcheck
#endif
#undef argv_2902
#define argv_2902 argv_4108
#undef argv_2905
#define argv_2905 argv_4109
#undef argv_2906
#define argv_2906 argv_4110
#undef argv_2908
#define argv_2908 argv_4111
#undef argv_2909
#define argv_2909 argv_4112
#undef argv_2910
#define argv_2910 argv_4113
#undef argv_2911
#define argv_2911 argv_4114
#undef argv_2912
#define argv_2912 argv_4115
#undef argv_2914
#define argv_2914 argv_4116
#undef argv_2915
#define argv_2915 argv_4117
#undef MPI_Name_get
#define MPI_Name_get PMPI_Name_get
#undef argv_2949
#define argv_2949 argv_4119
#undef argv_2956
#define argv_2956 argv_4120
#undef argv_2958
#define argv_2958 argv_4121
#undef argv_2963
#define argv_2963 argv_4123
#undef argv_2965
#define argv_2965 argv_4125
#undef argv_2967
#define argv_2967 argv_4126
#undef argv_2968
#define argv_2968 argv_4127
#undef argv_2975
#define argv_2975 argv_4131
#undef argv_2976
#define argv_2976 argv_4132
#undef argv_2978
#define argv_2978 argv_4133
#undef argv_2979
#define argv_2979 argv_4134
#undef argv_2982
#define argv_2982 argv_4136
#undef argv_2984
#define argv_2984 argv_4137
#undef argv_2988
#define argv_2988 argv_4139
#undef argv_2989
#define argv_2989 argv_4140
#undef argv_2990
#define argv_2990 argv_4141
#undef argv_2991
#define argv_2991 argv_4142
#undef argv_2992
#define argv_2992 argv_4143
#undef argv_2995
#define argv_2995 argv_4144
#undef argv_2996
#define argv_2996 argv_4145
#undef argv_2998
#define argv_2998 argv_4146
#undef argv_2999
#define argv_2999 argv_4147
#undef argv_3006
#define argv_3006 argv_4149
#undef argv_3007
#define argv_3007 argv_4150
#undef argv_3008
#define argv_3008 argv_4151
#undef argv_3009
#define argv_3009 argv_4152
#undef argv_3011
#define argv_3011 argv_4153
#undef argv_3012
#define argv_3012 argv_4154
#undef argv_3023
#define argv_3023 argv_4157
#undef argv_3024
#define argv_3024 argv_4158
#undef argv_3025
#define argv_3025 argv_4159
#undef argv_3026
#define argv_3026 argv_4160
#undef argv_3027
#define argv_3027 argv_4161
#undef argv_3032
#define argv_3032 argv_4162
#undef argv_3033
#define argv_3033 argv_4163
#undef argv_3035
#define argv_3035 argv_4164
#undef argv_3036
#define argv_3036 argv_4165
#undef MPI_Type_count
#define MPI_Type_count PMPI_Type_count
#undef argv_3037
#define argv_3037 argv_4166
#undef argv_3039
#define argv_3039 argv_4168
#undef argv_3043
#define argv_3043 argv_4172
#undef argv_3046
#define argv_3046 argv_4175
#undef argv_3048
#define argv_3048 argv_4176
#undef argv_3050
#define argv_3050 argv_4178
#undef argv_3051
#define argv_3051 argv_4179
#undef argv_3055
#define argv_3055 argv_4183
#undef argv_3056
#define argv_3056 argv_4184
#undef argv_3057
#define argv_3057 argv_4185
#undef argv_3058
#define argv_3058 argv_4186
#undef argv_3061
#define argv_3061 argv_4189
#undef argv_3062
#define argv_3062 argv_4190
#undef argv_3063
#define argv_3063 argv_4191
#undef argv_3064
#define argv_3064 argv_4192
#undef argv_3069
#define argv_3069 argv_4193
#undef argv_3078
#define argv_3078 argv_4196
#undef argv_3079
#define argv_3079 argv_4197
#undef argv_3080
#define argv_3080 argv_4198
#undef argv_3081
#define argv_3081 argv_4199
#undef argv_3103
#define argv_3103 argv_4219
#undef argv_3104
#define argv_3104 argv_4220

/* The Fortran versions are handled directly by the Fortran wrappers */

/* MPI-2 functions */
#undef argv_2646
#define argv_2646 argv_3971
#undef argv_2652
#define argv_2652 argv_3975
#undef argv_2682
#define argv_2682 argv_3994
#undef argv_2692
#define argv_2692 argv_3995
#undef argv_2693
#define argv_2693 argv_3996
#undef argv_2695
#define argv_2695 argv_3998
#undef argv_2697
#define argv_2697 argv_4000
#undef argv_2698
#define argv_2698 argv_4001
#undef argv_2699
#define argv_2699 argv_4002
#undef argv_2704
#define argv_2704 argv_4005
#undef argv_2705
#define argv_2705 argv_4006
#undef argv_2706
#define argv_2706 argv_4007
#undef argv_2707
#define argv_2707 argv_4008
#undef argv_2709
#define argv_2709 argv_4010
#undef argv_2717
#define argv_2717 argv_4014
#undef argv_2718
#define argv_2718 argv_4015
#undef argv_2720
#define argv_2720 argv_4017
#undef argv_2721
#define argv_2721 argv_4018
#undef argv_2800
#define argv_2800 argv_4026
#undef argv_2803
#define argv_2803 argv_4027
#undef argv_2804
#define argv_2804 argv_4028
#undef argv_2805
#define argv_2805 argv_4029
#undef argv_2806
#define argv_2806 argv_4030
#undef argv_2808
#define argv_2808 argv_4031
#undef argv_2809
#define argv_2809 argv_4032
#undef MPI_File_get_byte_offset
#define MPI_File_get_byte_offset PMPI_File_get_byte_offset
#undef argv_2810
#define argv_2810 argv_4033
#undef argv_2811
#define argv_2811 argv_4034
#undef argv_2812
#define argv_2812 argv_4035
#undef argv_2813
#define argv_2813 argv_4036
#undef argv_2814
#define argv_2814 argv_4037
#undef argv_2815
#define argv_2815 argv_4038
#undef argv_2816
#define argv_2816 argv_4039
#undef argv_2817
#define argv_2817 argv_4040
#undef argv_2818
#define argv_2818 argv_4041
#undef argv_2819
#define argv_2819 argv_4042
#undef argv_2820
#define argv_2820 argv_4043
#undef argv_2821
#define argv_2821 argv_4044
#undef argv_2822
#define argv_2822 argv_4045
#undef argv_2823
#define argv_2823 argv_4046
#undef argv_2825
#define argv_2825 argv_4047
#undef argv_2826
#define argv_2826 argv_4048
#undef argv_2827
#define argv_2827 argv_4049
#undef argv_2828
#define argv_2828 argv_4050
#undef argv_2829
#define argv_2829 argv_4051
#undef argv_2830
#define argv_2830 argv_4052
#undef argv_2831
#define argv_2831 argv_4053
#undef argv_2832
#define argv_2832 argv_4054
#undef argv_2833
#define argv_2833 argv_4055
#undef argv_2834
#define argv_2834 argv_4056
#undef argv_2835
#define argv_2835 argv_4057
#undef argv_2836
#define argv_2836 argv_4058
#undef argv_2837
#define argv_2837 argv_4059
#undef argv_2838
#define argv_2838 argv_4060
#undef argv_2839
#define argv_2839 argv_4061
#undef argv_2840
#define argv_2840 argv_4062
#undef argv_2841
#define argv_2841 argv_4063
#undef argv_2842
#define argv_2842 argv_4064
#undef argv_2843
#define argv_2843 argv_4065
#undef argv_2844
#define argv_2844 argv_4066
#undef argv_2845
#define argv_2845 argv_4067
#undef argv_2846
#define argv_2846 argv_4068
#undef argv_2847
#define argv_2847 argv_4069
#undef argv_2848
#define argv_2848 argv_4070
#undef argv_2850
#define argv_2850 argv_4072
#undef argv_2855
#define argv_2855 argv_4073
#undef MPI_Get
#define MPI_Get PMPI_Get
#undef argv_2858
#define argv_2858 argv_4076
#undef argv_2861
#define argv_2861 argv_4079
#undef argv_2866
#define argv_2866 argv_4083
#undef argv_2890
#define argv_2890 argv_4098
#undef argv_2894
#define argv_2894 argv_4102
#undef argv_2900
#define argv_2900 argv_4107
#undef argv_2926
#define argv_2926 argv_4118
#undef argv_2960
#define argv_2960 argv_4122
#undef argv_2964
#define argv_2964 argv_4124
#undef argv_2971
#define argv_2971 argv_4128
#undef argv_2972
#define argv_2972 argv_4129
#undef argv_2973
#define argv_2973 argv_4130
#undef argv_2980
#define argv_2980 argv_4135
#undef argv_2985
#define argv_2985 argv_4138
#undef argv_3004
#define argv_3004 argv_4148
#undef argv_3014
#define argv_3014 argv_4155
#undef argv_3015
#define argv_3015  argv_4156
#undef argv_3037
#define argv_3037 argv_4166
#undef argv_3038
#define argv_3038 argv_4167
#undef argv_3039
#define argv_3039 argv_4168
#undef argv_3040
#define argv_3040 argv_4169
#undef argv_3041
#define argv_3041 argv_4170
#undef argv_3042
#define argv_3042 argv_4171
#undef argv_3043
#define argv_3043 argv_4172
#undef argv_3044
#define argv_3044 argv_4173
#undef argv_3045
#define argv_3045 argv_4174
#undef argv_3049
#define argv_3049 argv_4177
#undef argv_3050
#define argv_3050 argv_4178
#undef argv_3052
#define argv_3052 argv_4180
#undef argv_3053
#define argv_3053 argv_4181
#undef argv_3054
#define argv_3054 argv_4182
#undef argv_3059
#define argv_3059 argv_4187
#undef argv_3060
#define argv_3060 argv_4188
#undef argv_3070
#define argv_3070 argv_4194
#undef argv_3071
#define argv_3071 argv_4195
#undef argv_3083
#define argv_3083 argv_4200
#undef argv_3084
#define argv_3084 argv_4201
#undef argv_3085
#define argv_3085 argv_4202
#undef argv_3086
#define argv_3086 argv_4203
#undef argv_3087
#define argv_3087 argv_4204
#undef argv_3089
#define argv_3089 argv_4205
#undef argv_3090
#define argv_3090 argv_4206
#undef argv_3091
#define argv_3091 argv_4207
#undef argv_3092
#define argv_3092 argv_4208
#undef argv_3093
#define argv_3093 argv_4209
#undef argv_3094
#define argv_3094 argv_4210
#undef argv_3095
#define argv_3095 argv_4211
#undef argv_3096
#define argv_3096 argv_4212
#undef argv_3097
#define argv_3097 argv_4213
#undef argv_3098
#define argv_3098 argv_4214
#undef argv_3099
#define argv_3099 argv_4215
#undef argv_3100
#define argv_3100 argv_4216
#undef argv_3101
#define argv_3101 argv_4217
#undef argv_3102
#define argv_3102 argv_4218

#endif
