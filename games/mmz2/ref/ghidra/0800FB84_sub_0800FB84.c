// sub_0800FB84 at 0x0800FB84 (thumb)

undefined8 sub_0800FB84(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  undefined auStack_20 [4];
  ushort local_1c;
  
  sub_080EF3F0(auStack_20,&DAT_080ef6d0,8);
  iVar6 = *param_1 + 0x7ff;
  iVar5 = param_1[1];
  iVar4 = iVar5 + 0x7ff;
  iVar2 = iVar4 >> 0xc;
  if ((byte)(&DAT_08312c8c)[iVar2] - 3 < 2) {
    sVar1 = sub_08008310(iVar6,iVar4);
    local_1c = sub_08008310(iVar6,iVar5 + 0x507ff);
    if ((int)sVar1 != (uint)local_1c) {
      sub_0800860C(iVar6 >> 0xc,iVar2,auStack_20);
      iVar2 = sub_08003390(0x61);
      if (iVar2 == 0) {
        sub_080032EC(0x61);
      }
      uVar3 = 1;
      goto LAB_0800fc0e;
    }
  }
  uVar3 = 0;
LAB_0800fc0e:
  return CONCAT44(in_lr,uVar3);
}

