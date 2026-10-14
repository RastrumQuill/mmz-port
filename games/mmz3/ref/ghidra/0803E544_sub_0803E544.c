// sub_0803E544 at 0x0803E544 (thumb)

undefined8 sub_0803E544(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xe) == '\0') || (cVar1 = *(char *)(param_1 + 0x13), cVar1 == '\0'))
  goto LAB_0803e5c2;
  *(char *)(param_1 + 0x13) = cVar1 + -1;
  if (cVar1 != '\x01') goto LAB_0803e5c2;
  uVar3 = DAT_0202f608 * 0x343fd + 0x269ec3;
  DAT_0202f608 = uVar3 & 0x7fffffff;
  if ((uVar3 * 2 >> 0x11 & 0xf) < 8) {
    if ((*(uint *)(param_1 + 0xb4) & 0xffff00) == 0) {
LAB_0803e5bc:
      uVar2 = 5;
    }
    else {
      uVar2 = 4;
    }
  }
  else {
    if ((*(uint *)(param_1 + 0xb4) & 0xffff00) != 0x10100) goto LAB_0803e5bc;
    uVar2 = 4;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(char *)(param_1 + 0xe) = cVar1 + -1;
LAB_0803e5c2:
  return CONCAT44(in_lr,1);
}

