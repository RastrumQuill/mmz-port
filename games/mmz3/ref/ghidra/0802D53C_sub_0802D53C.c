// sub_0802D53C at 0x0802D53C (thumb)

undefined4 sub_0802D53C(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x801) {
    if (*(char *)(param_1 + 0xe8) == '\x01') {
      sub_08017700(param_1,0xb04);
    }
    else {
      sub_080177CC(param_1,0x801,2,*(undefined *)(param_1 + 0x129));
    }
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xec) = 0;
    uVar2 = sub_08025BEC(param_1);
    sub_08017700(param_1,uVar2);
  }
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_0802D300(param_1);
  }
  return in_lr;
}

