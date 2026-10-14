// sub_0801F254 at 0x0801F254 (thumb)

undefined4 sub_0801F254(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x11b);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x11b) = cVar1 + -1;
    cVar1 = sub_08016EC0(param_1);
    if (cVar1 != '\0') {
      uVar3 = (uint)*(byte *)(param_1 + 0x11e);
      if (uVar3 < 100) {
        iVar4 = sub_080C8AD0((uVar3 * 8 - (uint)*(byte *)(param_1 + 0x11e)) * 0x80,100);
        iVar4 = 0x380 - iVar4;
      }
      else {
        iVar4 = 0;
      }
      *(int *)(param_1 + 0x54) = iVar4;
    }
  }
  if (((*(byte *)(param_1 + 0xbe) < 3) && (*(char *)(param_1 + 0x115) != '\x05')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    sub_08018C20(param_1,5,1,1);
  }
  sub_08016D78(param_1);
  puVar6 = (undefined4 *)(param_1 + 0x108);
  sub_0801A0A4(param_1 + 0x4c,param_1 + 0xc4,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  iVar4 = *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar4;
  cVar1 = sub_08019C74(param_1 + 0x4c,param_1 + 0xc4,*puVar6,*(byte *)(param_1 + 10) >> 4 & 1,1,1);
  bVar2 = sub_0801C1E8(param_1,*puVar6);
  *(byte *)(param_1 + 0x11c) = bVar2;
  if (bVar2 < 100) {
    iVar5 = sub_080C8AD0((uint)bVar2 << 5,100);
    iVar5 = 0x40 - iVar5;
  }
  else {
    iVar5 = 0x20;
  }
  if (*(int *)(param_1 + 0x60) < 1) {
    iVar5 = -iVar5;
  }
  *(int *)(param_1 + 0x60) = iVar5;
  iVar4 = iVar4 + iVar5;
  *(int *)(param_1 + 0x58) = iVar4;
  if ((-1 < iVar5 * iVar4) || (cVar1 != '\0')) {
    sub_0801F608(param_1);
    *(undefined *)(param_1 + 0xbd) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = 0x102;
  }
  return in_lr;
}

