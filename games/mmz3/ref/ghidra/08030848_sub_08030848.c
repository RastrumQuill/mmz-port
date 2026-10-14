// sub_08030848 at 0x08030848 (thumb)

undefined4 sub_08030848(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xc01) {
    sub_080177CC(param_1,0xc01,2,*(undefined *)(param_1 + 0x129));
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xec) = 0;
    sub_080177CC(param_1,0x500,2,1);
  }
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_080306B4(param_1);
  }
  return in_lr;
}

