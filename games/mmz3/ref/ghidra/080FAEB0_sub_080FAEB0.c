// sub_080FAEB0 at 0x080FAEB0 (thumb)

undefined8 sub_080FAEB0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xdcd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        sub_0800471C(0x1d);
        uVar3 = sub_080B5144(0);
        *(undefined4 *)(param_1 + 0xde0) = uVar3;
        *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
      }
      else if (bVar1 != 3) goto LAB_080faf1c;
      if (1 < *(byte *)(*(int *)(param_1 + 0xde0) + 0xc)) {
        *(char *)(param_1 + 0xdcc) = *(char *)(param_1 + 0xdcc) + '\x01';
        *(undefined *)(param_1 + 0xdcd) = 0;
        *(undefined *)(param_1 + 0xdce) = 0;
        *(undefined *)(param_1 + 0xdcf) = 0;
      }
      goto LAB_080faf1c;
    }
    if (bVar1 != 0) goto LAB_080faf1c;
    *(undefined4 *)(param_1 + 0xde8) = 0x3c;
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  }
  iVar2 = *(int *)(param_1 + 0xde8) + -1;
  *(int *)(param_1 + 0xde8) = iVar2;
  if (iVar2 == 0) {
    *(char *)(param_1 + 0xdcd) = *(char *)(param_1 + 0xdcd) + '\x01';
  }
LAB_080faf1c:
  *(undefined2 *)(param_1 + 0xde4) = 0;
  *(undefined2 *)(param_1 + 0xde6) = 0;
  return CONCAT44(in_lr,1);
}

