// sub_080895B4 at 0x080895B4 (thumb)

undefined4 sub_080895B4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0801260C();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127E4(param_1,0x7401);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_08006DE4(param_1 + 0x74,&DAT_08341a40,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8089c45;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar1;
  }
  *(undefined *)(param_1 + 0x11) = 0;
  sub_080EF118(param_1,*(undefined4 *)(&DAT_08341928 + (uint)*(byte *)(param_1 + 0x10) * 4));
  if (*(char *)(param_1 + 0x10) == '\x04') {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    sub_080127E4(param_1,0x740d);
    if (*(char *)(param_1 + 0x10) == '\x04') goto LAB_08089634;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
LAB_08089634:
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_0808966C(param_1);
  return in_lr;
}

