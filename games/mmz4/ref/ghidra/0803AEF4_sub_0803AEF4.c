// sub_0803AEF4 at 0x0803AEF4 (thumb)

undefined8 sub_0803AEF4(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xd);
  if (((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x05')) {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = 0x1000;
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar2 = *(int *)(param_1 + 0x58);
    iVar3 = -0x1000;
  }
  param_2[1] = iVar2 + iVar3;
  return CONCAT44(in_lr,1);
}

