// sub_0801EAF8 at 0x0801EAF8 (thumb)

undefined4 sub_0801EAF8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined uVar3;
  byte bVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar7 = (uint)*(byte *)(param_1 + 0x195);
  bVar1 = *(byte *)(param_1 + 0x198 + uVar7);
  uVar7 = uVar7 + 1;
  uVar8 = uVar7 & 0x3f;
  *(byte *)(param_1 + 0x195) = (byte)uVar8;
  uVar5 = sub_0801EBDC(param_1);
  uVar2 = DAT_0202ec34;
  if (*(char *)(param_1 + 0x10) != '\0') {
    uVar2 = DAT_0202ec36;
  }
  uVar3 = sub_0801EBAC(uVar5,uVar2);
  bVar4 = sub_080EF124(param_1,uVar2,uVar3,bVar1);
  *(byte *)(param_1 + 0x198 + uVar8) = bVar4;
  *(byte *)(param_1 + 0x196) = bVar4 & ~bVar1;
  puVar6 = (uint *)(param_1 + 0x1d8 + (uVar8 >> 5) * 4);
  *puVar6 = *puVar6 & ~(1 << (uVar7 & 0x1f));
  *(undefined *)(param_1 + 0x197) = 0xff;
  return in_lr;
}

