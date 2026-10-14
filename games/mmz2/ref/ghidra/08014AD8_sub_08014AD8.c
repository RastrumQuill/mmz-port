// sub_08014AD8 at 0x08014AD8 (thumb)

undefined4 sub_08014AD8(byte param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar1 = DAT_0202eda8;
  if ((-1 < DAT_0202edb4) && ((DAT_0202ec42 & 1) == 0)) {
    uVar2 = sub_080EF150(DAT_0202edb4 * 100,0x3c);
    uVar3 = sub_080EF150(uVar2,1000);
    iVar4 = sub_080EF1E8(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar4 + 0x1e],0x16,0);
    uVar3 = sub_080EF150(uVar2,100);
    iVar4 = sub_080EF1E8(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar4 + 0x1e],0x17,0);
    sub_080DE510(&DAT_0834ca01,0x18,0);
    uVar3 = sub_080EF150(uVar2,10);
    iVar4 = sub_080EF1E8(uVar3,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar4 + 0x1e],0x19,0);
    iVar4 = sub_080EF1E8(uVar2,10);
    sub_080DE510(&DAT_0834c9e4 + (ushort)(&DAT_0834c47c)[iVar4 + 0x1e],0x1a,0);
  }
  if (param_1 == 0) {
    sub_08014F74(&DAT_0202ed18);
    uVar5 = (uint)DAT_020011d2;
    uVar6 = uVar5 * 0x18 & 0xffffffe0;
    sub_080EEF68(&DAT_020011d4,&DAT_020014d4,uVar6 >> 2);
    uVar5 = uVar5 * 0x18 & 0x1f;
    if (uVar5 != 0) {
      sub_080EEF6C(&DAT_020011d4 + uVar6,(int)&DAT_020014d4 + uVar6,uVar5 >> 2 | 0x4000000);
    }
    DAT_020011d3 = DAT_020011d2;
    DAT_020011d2 = param_1;
    if (DAT_0202ed30 != '\0') {
      sub_080080B8(&DAT_0202ed50);
    }
    sub_08014F80(&DAT_0202ed18);
  }
  if (DAT_0202ed30 != '\0') {
    sub_08008134(uVar1);
  }
  sub_0801B4D0(&DAT_0202ec40);
  sub_08014F9C(&DAT_0202ed18);
  return in_lr;
}

