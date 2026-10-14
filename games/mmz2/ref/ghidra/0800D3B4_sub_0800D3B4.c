// sub_0800D3B4 at 0x0800D3B4 (thumb)

undefined8 sub_0800D3B4(int *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined auStack_20 [4];
  ushort local_1c;
  
  sub_080EF3F0(auStack_20,&DAT_080ef6a8,8);
  iVar7 = *param_1 + 0x7ff;
  iVar6 = param_1[1];
  iVar2 = iVar6 + 0x7ff >> 0xc;
  uVar5 = (uint)(byte)(&DAT_08312c8c)[iVar2];
  if ((uVar5 - 3 < 10) && (1 < uVar5 - 4)) {
    iVar3 = iVar6 + 0x467ff;
    if (uVar5 == 3) {
      iVar3 = iVar6 + 0x5a7ff;
    }
    sVar1 = sub_08008310(iVar7,iVar6 + 0x7ff);
    local_1c = sub_08008310(iVar7,iVar3);
    if ((int)sVar1 != (uint)local_1c) {
      sub_0800860C(iVar7 >> 0xc,iVar2,auStack_20);
      iVar2 = sub_08003390(0x61);
      if (iVar2 == 0) {
        sub_080032EC(0x61);
      }
      uVar4 = 1;
      goto LAB_0800d452;
    }
  }
  uVar4 = 0;
LAB_0800d452:
  return CONCAT44(in_lr,uVar4);
}

