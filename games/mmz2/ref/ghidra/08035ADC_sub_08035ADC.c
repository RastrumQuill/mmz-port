// sub_08035ADC at 0x08035ADC (thumb)

undefined8 sub_08035ADC(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if ((param_2 != 7) && (iVar1 = sub_08035A9C(), iVar1 != 0)) {
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = (char)iVar1;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}

