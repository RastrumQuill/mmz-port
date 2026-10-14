// sub_08090EF0 at 0x08090EF0 (thumb)

undefined4 sub_08090EF0(int param_1)

{
  byte bVar1;
  undefined uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  sub_0801CD28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x3c13);
  sub_0801CFF0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined *)(param_1 + 0x25) = 0xf;
  if (*(char *)(iVar3 + 0xbe) == '\0') {
    bVar1 = *(byte *)(iVar3 + 10) >> 4;
    *(byte *)(param_1 + 0x11) = bVar1 & 1;
    if ((bVar1 & 1) != 0) {
      *(undefined *)(param_1 + 0x24) = 0;
      goto LAB_08090f72;
    }
    uVar2 = 0x80;
  }
  else {
    *(undefined *)(param_1 + 0x11) = 2;
    uVar2 = 0xc0;
  }
  *(undefined *)(param_1 + 0x24) = uVar2;
LAB_08090f72:
  *(undefined *)(param_1 + 0xc0) = *(undefined *)(param_1 + 0x24);
  *(undefined *)(param_1 + 0x12) = 0x78;
  return in_lr;
}

