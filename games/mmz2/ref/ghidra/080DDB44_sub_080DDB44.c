// sub_080DDB44 at 0x080DDB44 (thumb)

undefined4 sub_080DDB44(int param_1)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(uint *)(param_1 + 0x54) =
       *(int *)(&DAT_0834c3f8 + (uint)*(byte *)(param_1 + 0x10) * 8) +
       (uint)*(byte *)(param_1 + 0x11) * 0x1000;
  piVar4 = (int *)sub_080DE178(param_1);
  if (*(char *)((int)piVar4 + 9) == '\x03') {
    *(undefined *)(param_1 + 0xd) = 3;
    iVar5 = *piVar4;
    cVar2 = sub_08037C34(iVar5,*(byte *)(param_1 + 0x11) + 1);
    if ((int)cVar2 == (uint)*(byte *)(iVar5 + 0x212 + (uint)*(byte *)(param_1 + 0x10))) {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 4;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x49);
      bVar3 = 8;
    }
    *(byte *)(param_1 + 0x49) = bVar1 & 0xf3 | bVar3;
    sub_080DDBC0(param_1);
  }
  return in_lr;
}

