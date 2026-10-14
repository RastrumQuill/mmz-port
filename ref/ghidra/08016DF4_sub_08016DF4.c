// sub_08016DF4 at 0x08016DF4 (thumb)

undefined8 sub_08016DF4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12e);
  uVar6 = (uint)bVar1;
  if ((*(byte *)(param_1 + 0x130 + uVar6) & 0x40) == 0) {
    uVar2 = *(undefined *)(param_1 + 0x12d);
    uVar7 = uVar6 - 1 & 0x3f;
    bVar8 = *(byte *)(param_1 + 0x130 + uVar7);
    iVar9 = 4;
    do {
      uVar5 = sub_08016EC0(param_1);
      uVar5 = uVar5 & 0xff;
      if (uVar5 == 0) {
        *(char *)(param_1 + 0x12e) = (char)uVar7;
        uVar7 = uVar7 - 1 & 0x3f;
        bVar3 = *(byte *)(param_1 + 0x130 + uVar7);
        *(byte *)(param_1 + 0x12d) = bVar8 & ~bVar3;
        bVar8 = bVar3;
      }
      iVar9 = iVar9 + -1;
    } while ((uVar5 == 0) && (iVar9 != 0));
    if (uVar5 != 0) {
      do {
        uVar7 = uVar7 + 1 & 0x3f;
        *(char *)(param_1 + 0x12e) = (char)uVar7;
        cVar4 = sub_08016F08(param_1);
        uVar5 = (uint)(cVar4 == '\0');
        if (uVar5 == 0) break;
      } while (uVar7 != uVar6);
    }
    *(byte *)(param_1 + 0x12e) = bVar1;
    *(undefined *)(param_1 + 0x12d) = uVar2;
  }
  else {
    uVar5 = 0x40;
  }
  return CONCAT44(in_lr,uVar5);
}

