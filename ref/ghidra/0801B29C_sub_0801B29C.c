// sub_0801B29C at 0x0801B29C (thumb)

undefined4 sub_0801B29C(int param_1)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar7 = (uint)*(byte *)(param_1 + 0x12e);
  bVar1 = *(byte *)(param_1 + 0x130 + uVar7);
  uVar7 = uVar7 + 1;
  uVar8 = uVar7 & 0x3f;
  *(byte *)(param_1 + 0x12e) = (byte)uVar8;
  uVar4 = sub_0801B374(param_1);
  uVar2 = DAT_02022b62;
  bVar3 = sub_0801B340(uVar4,DAT_02022b62);
  bVar5 = bVar3;
  if ((uVar2 & 0x8000) != 0) {
    bVar5 = bVar3 & 0xef | bVar1 & 0x10;
    if (*(char *)(param_1 + 0x219) == '\x01') {
      bVar5 = bVar3 & 0x6f | bVar1 & 0x10 | bVar1 & 0x80;
    }
  }
  *(byte *)(param_1 + 0x130 + uVar8) = bVar5;
  *(byte *)(param_1 + 0x12d) = bVar5 & ~bVar1;
  puVar6 = (uint *)(param_1 + 0x170 + (uVar8 >> 5) * 4);
  *puVar6 = *puVar6 & ~(1 << (uVar7 & 0x1f));
  *(undefined *)(param_1 + 0x12f) = 0xff;
  return in_lr;
}

