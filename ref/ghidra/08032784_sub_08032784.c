// sub_08032784 at 0x08032784 (thumb)

undefined4 sub_08032784(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  sub_080C8D70(abStack_10,&DAT_080c9248,3);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,10);
    *(undefined *)(param_1 + 0xe) = 0;
    sub_0807A5F8(param_1,0,0);
    sub_08001EAC(0x37);
    *(undefined *)(param_1 + 0x13) = 0;
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0x13);
  *(byte *)(param_1 + 0x13) = bVar1 + 1;
  if (abStack_10[*(byte *)(param_1 + 0xf)] < bVar1) {
    *(undefined *)(param_1 + 0xe) = 1;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 == -1) {
      *(undefined *)(param_1 + 0xd) = 2;
    }
  }
  return in_lr;
}

