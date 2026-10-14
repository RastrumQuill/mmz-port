// sub_080329BC at 0x080329BC (thumb)

undefined8 sub_080329BC(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = sub_08022C40(param_1,*(undefined4 *)(param_1 + 0xd8));
  *(byte *)(param_1 + 0x18a) = bVar1;
  if (bVar1 < 100) {
    iVar2 = sub_080EF150((uint)bVar1 << 5,100);
    iVar2 = 0x40 - iVar2;
  }
  else {
    iVar2 = 0x20;
  }
  if (*(int *)(param_1 + 0x68) < 1) {
    iVar2 = -iVar2;
  }
  *(int *)(param_1 + 0x68) = iVar2;
  *(int *)(param_1 + 0x60) = param_2 + iVar2;
  return CONCAT44(in_lr,param_2 + iVar2);
}

