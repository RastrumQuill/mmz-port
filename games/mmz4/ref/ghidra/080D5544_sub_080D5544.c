// sub_080D5544 at 0x080D5544 (thumb)

undefined8 sub_080D5544(char *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  cVar1 = *param_1;
  uVar2 = 0;
  while ((uVar3 = uVar2, cVar1 != '\0' && (uVar2 = uVar2 + 1 & 0xff, uVar3 = 0, uVar2 < 0x10))) {
    cVar1 = param_1[uVar2];
  }
  return CONCAT44(in_lr,uVar3);
}

