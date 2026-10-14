// sub_080C3294 at 0x080C3294 (thumb)

undefined8 sub_080C3294(int param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = sub_0801C4FC(*(undefined4 *)(param_1 + 0x10));
  if (bVar1 < 2) {
    *(undefined *)(param_1 + 1) = 0;
    sub_08001EAC(0xc1);
    iVar3 = 0;
  }
  else {
    *(undefined *)(param_1 + 2) = 1;
    *(undefined *)(param_1 + 5) = 0;
    *(undefined *)(param_1 + 6) = 8;
    sub_08001EAC(0x29);
    cVar2 = sub_080C32E0(param_1,(int)param_2);
    iVar3 = (int)cVar2;
  }
  return CONCAT44(in_lr,iVar3);
}

