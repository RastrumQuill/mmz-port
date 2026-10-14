// sub_080219B8 at 0x080219B8 (thumb)

undefined4 sub_080219B8(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x195);
  if (2 < uVar3) {
    uVar3 = 2;
  }
  bVar1 = *(byte *)(param_1 + 0x11f);
  uVar4 = (uint)bVar1;
  if (uVar4 < uVar3) {
    if (*(char *)(param_1 + 0x120) == '\0') {
      bVar2 = sub_0801B50C(param_1,1);
      if ((bVar2 & *(byte *)(param_1 + 0x12d)) == 0) goto LAB_08021a44;
    }
    *(undefined *)(param_1 + 0xc3) = *(undefined *)(param_1 + 0xc0);
    *(undefined *)(param_1 + 0xc0) = 2;
    sub_08027188(param_1,(&DAT_082a9928)[uVar4],0);
    sub_08018BE8(param_1,(&DAT_082a9926)[uVar4]);
    *(byte *)(param_1 + 0x11f) = bVar1 + 1;
    *(char *)(param_1 + 0x120) = '\0';
  }
  else {
LAB_08021a44:
    if (*(char *)(param_1 + 0x73) == '\x03') {
      sub_08018364(param_1);
      sub_08018634(param_1);
    }
  }
  return in_lr;
}

