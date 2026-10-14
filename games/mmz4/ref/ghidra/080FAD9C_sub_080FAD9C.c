// sub_080FAD9C at 0x080FAD9C (thumb)

undefined4 sub_080FAD9C(int param_1)

{
  undefined uVar1;
  char cVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((DAT_0202cac0 & 0xf) == 0) {
      uVar1 = 100;
    }
    else {
      uVar1 = 200;
    }
    *(undefined *)(param_1 + 0x12) = uVar1;
    sub_08005784(param_1 + 0x74,&DAT_088675ac);
    sub_0801CF00(param_1,0x9600);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    *(undefined *)(param_1 + 0xd) = 2;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

