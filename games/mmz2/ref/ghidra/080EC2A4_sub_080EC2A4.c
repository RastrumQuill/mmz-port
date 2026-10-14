// sub_080EC2A4 at 0x080EC2A4 (thumb)

undefined4 sub_080EC2A4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x75b8);
  uVar6 = (uint)*(byte *)(param_1 + 0xdde);
  if (((uVar6 - 1 < 0x51) &&
      (((int)(uint)*(byte *)(iVar7 + 0x233 + (uint)(*(byte *)(param_1 + 0xdde) >> 3)) >> (uVar6 & 7)
       & 1U) != 0)) && (cVar1 = sub_080D5A34(iVar7,uVar6), cVar1 == '\0')) {
    *(undefined *)(param_1 + 3) = 1;
    *(undefined2 *)(param_1 + 4) = 0;
    *(undefined *)(param_1 + 0xdda) = 0;
    *(undefined2 *)(param_1 + 0xde0) = 0;
    iVar2 = sub_080D5A98(iVar7,uVar6);
    iVar3 = sub_080D5ADC(iVar7,uVar6);
    uVar6 = iVar3 - iVar2;
    *(short *)(param_1 + 0xde4) = (short)uVar6;
    uVar4 = (uint)*(ushort *)(iVar7 + 0x1fe);
    if (uVar4 < uVar6) {
      uVar6 = uVar4;
    }
    *(short *)(param_1 + 0xde2) = (short)uVar6;
    cVar5 = '\x01';
    cVar1 = '\x01';
    if (9 < uVar4) {
      do {
        cVar5 = cVar1 + '\x01';
        uVar4 = sub_080EF150(uVar4,10);
        cVar1 = cVar5;
      } while (9 < (int)uVar4);
    }
    *(char *)(param_1 + 0xddb) = cVar5;
    *(undefined *)(param_1 + 0xddc) = 0;
    sub_080EC384(param_1);
    return in_lr;
  }
  *(undefined *)(param_1 + 2) = 1;
  *(undefined *)(param_1 + 3) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  return in_lr;
}

