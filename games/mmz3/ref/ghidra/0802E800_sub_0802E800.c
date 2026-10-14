// sub_0802E800 at 0x0802E800 (thumb)

undefined4 sub_0802E800(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x902) {
    sub_080177CC(param_1,0x902,0,1);
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xec) = 0;
    sub_080177CC(param_1,0x200,(short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
  }
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_0802E618(param_1);
  }
  return in_lr;
}

