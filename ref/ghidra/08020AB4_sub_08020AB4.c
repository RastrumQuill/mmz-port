// sub_08020AB4 at 0x08020AB4 (thumb)

undefined4 sub_08020AB4(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x150;
  sub_08019C74(param_1 + 0x4c,param_1 + 0xc4,*(undefined4 *)(param_1 + 0x108),
               *(byte *)(param_1 + 10) >> 4 & 1,1,1);
  uVar5 = (uint)*(byte *)(param_1 + 0x118);
  if (0xef < uVar5) {
    uVar3 = sub_0801901C(param_1,2);
    uVar4 = sub_08019068(param_1,2);
    cVar1 = sub_080066AC(uVar3,uVar4);
    if (cVar1 != '\0') {
      return in_lr;
    }
  }
  uVar5 = uVar5 - 1;
  *(byte *)(param_1 + 0x118) = (byte)uVar5;
  if (uVar5 < 200) {
    *(undefined *)(param_1 + 0xf) = 2;
  }
  if ((uVar5 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x128) | 0x80;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x128) & 0x7f;
  }
  *(byte *)(param_1 + 0x128) = bVar2;
  return in_lr;
}

