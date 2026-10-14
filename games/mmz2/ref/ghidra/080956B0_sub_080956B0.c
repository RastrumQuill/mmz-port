// sub_080956B0 at 0x080956B0 (thumb)

undefined4 sub_080956B0(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0x10) == '\x02') && (1 < *(byte *)(iVar1 + 0xc))) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0x10) == '\x02') {
      sub_080128D4(param_1);
      *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + *(int *)(param_1 + 100);
      *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + *(int *)(param_1 + 0x68);
    }
    else {
      sub_080957B8(param_1);
      sub_080957F0(param_1);
      sub_08095830(param_1);
      sub_08095834(param_1);
      sub_080EF118(param_1,*(undefined4 *)(&DAT_08342c28 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809575C(param_1);
  }
  return in_lr;
}

