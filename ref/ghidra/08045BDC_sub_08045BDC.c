// sub_08045BDC at 0x08045BDC (thumb)

undefined4 sub_08045BDC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    DAT_02022adf = DAT_02022adf | 2;
    uVar2 = sub_080A7E48(param_1,2,0);
    *(undefined4 *)(param_1 + 0xc0) = uVar2;
    uVar2 = sub_080A7E48(param_1,2,1);
    *(undefined4 *)(param_1 + 0xc4) = uVar2;
    *(undefined *)(param_1 + 0x12) = 0xff;
  }
  sub_080297C0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}

