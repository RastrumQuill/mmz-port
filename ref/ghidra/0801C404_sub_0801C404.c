// sub_0801C404 at 0x0801C404 (thumb)

undefined8 sub_0801C404(int param_1,char param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x219) == '\x01') {
    if (*(char *)(param_1 + 0x18a + (param_3 & 0xff)) != param_2) {
      uVar2 = 0;
      goto LAB_0801c43e;
    }
    pbVar1 = (byte *)(param_1 + 0x122 + (param_3 & 0xff));
  }
  else {
    pbVar1 = (byte *)(param_1 + 0x122);
  }
  uVar2 = (uint)*pbVar1;
LAB_0801c43e:
  return CONCAT44(in_lr,uVar2);
}

