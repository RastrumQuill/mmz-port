// sub_08074454 at 0x08074454 (thumb)

undefined4 sub_08074454(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  bVar1 = *(byte *)(iVar3 + 0xe);
  if (bVar1 != 2) {
    if (2 < bVar1) {
      if (bVar1 != 3) {
        return in_lr;
      }
      sub_080128D4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) =
           *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
      return in_lr;
    }
    sub_080128D4(param_1);
  }
  sub_080127E4(param_1,0xa211);
  sub_080128D4(param_1);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  return in_lr;
}

