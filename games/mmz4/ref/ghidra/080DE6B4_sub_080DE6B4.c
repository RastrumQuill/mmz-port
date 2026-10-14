// sub_080DE6B4 at 0x080DE6B4 (thumb)

undefined4 sub_080DE6B4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x74);
  bVar1 = *(byte *)(param_1 + 0x78);
  sub_0801CFF0();
  cVar2 = *(char *)(param_1 + 0x12);
  if (cVar2 != '\0') {
    *(char *)(param_1 + 0x12) = cVar2 + -1;
    if ((byte)(cVar2 - 1U) < 0x12) {
      uVar3 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar3 & 0x7fffffff;
      *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -0x100 + (uVar3 * 0x80 >> 0x17);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -0x100;
    }
    else {
      iVar6 = FUN_081288bc(iVar6 * (uint)*(byte *)(param_1 + 0x12),0x18);
      uVar3 = (uint)bVar1 + *(int *)(param_1 + 0x5c);
      uVar5 = uVar3 & 0xff;
      iVar4 = *(short *)((int)&DAT_08128c10 + ((uVar5 + 0x40) * 0x1000000 >> 0x17)) * iVar6;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xff;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (iVar4 >> 8);
      iVar6 = iVar6 * (short)(&DAT_08128c10)[uVar5];
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xff;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (iVar6 >> 8);
      *(byte *)(param_1 + 0x78) = (byte)uVar3;
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 8);
    sub_080DE794(param_1);
  }
  return in_lr;
}

