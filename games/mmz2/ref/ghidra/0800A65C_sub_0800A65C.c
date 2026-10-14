// sub_0800A65C at 0x0800A65C (thumb)

undefined8 sub_0800A65C(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  undefined auStack_20 [4];
  ushort local_1c;
  
  sub_080EF3F0(auStack_20,&DAT_080ef690,8);
  iVar7 = *param_1;
  iVar4 = iVar7 + 0x7ff;
  iVar6 = param_1[1];
  iVar5 = iVar6 + 0x7ff;
  iVar2 = iVar5 >> 0xc;
  if ((byte)(&DAT_08312c8c)[iVar2] - 5 < 2) {
    sVar1 = sub_08008310(iVar4,iVar5);
    local_1c = sub_08008310(iVar7 + 0x5a7ff,iVar6 + -0x31801);
    if ((int)sVar1 != (uint)local_1c) {
      sub_0800860C(iVar4 >> 0xc,iVar2,auStack_20);
      uVar3 = 1;
      goto LAB_0800a6e0;
    }
  }
  uVar3 = 0;
LAB_0800a6e0:
  return CONCAT44(in_lr,uVar3);
}

