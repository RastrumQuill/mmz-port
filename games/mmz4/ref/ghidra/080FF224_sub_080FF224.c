// sub_080FF224 at 0x080FF224 (thumb)

undefined4 sub_080FF224(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_080FEB20(param_1);
    return in_lr;
  }
  sub_0801CFF0(param_1);
  iVar3 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0xb8) + (uint)DAT_0202daec * 0x100;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xb8) + (uint)DAT_0202daec * -0x100;
  }
  *(int *)(param_1 + 0x58) = iVar1;
  if (DAT_0202daec < 0x10) {
    uVar2 = 0xaa05;
  }
  else if (DAT_0202daec < 0x20) {
    uVar2 = 0xaa04;
  }
  else {
    if (0x2f < DAT_0202daec) {
      sub_0801CF00(param_1,0xaa02);
      goto LAB_080ff2dc;
    }
    uVar2 = 0xaa03;
  }
  sub_0801CF00(param_1,uVar2);
LAB_080ff2dc:
  sub_0801CFF0(param_1);
  if (iVar3 == *(int *)(param_1 + 0x58)) {
    *(undefined *)(param_1 + 0xbd) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      sub_08002B10(0x78);
    }
    *(char *)(param_1 + 0xbd) = '\x01';
  }
  return in_lr;
}

