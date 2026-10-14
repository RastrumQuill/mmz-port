// sub_080313D8 at 0x080313D8 (thumb)

undefined4 sub_080313D8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x124) = *(byte *)(param_1 + 0x124) | 1;
  if (CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0xd01) {
    sub_080177CC(param_1,0xd01,2,*(undefined *)(param_1 + 0x129));
  }
  cVar1 = *(char *)(param_1 + 0x129) + -1;
  *(char *)(param_1 + 0x129) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xec) = 0;
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0xf) != '\x02') {
        sub_08017700(param_1,0x701);
        goto LAB_08031474;
      }
      uVar2 = 0x702;
    }
    else {
      if (*(char *)(param_1 + 0xf) != '\x03') {
        sub_080177CC(param_1,0x704,4,1);
        goto LAB_08031474;
      }
      uVar2 = 0x705;
    }
    sub_080177CC(param_1,uVar2,1,1);
  }
LAB_08031474:
  cVar1 = sub_080341A4(param_1,param_1 + 0x128);
  if (cVar1 != '\0') {
    *(undefined *)(param_1 + 0xec) = 3;
    *(undefined *)(param_1 + 0xed) = 0;
    sub_080311C0(param_1);
  }
  return in_lr;
}

