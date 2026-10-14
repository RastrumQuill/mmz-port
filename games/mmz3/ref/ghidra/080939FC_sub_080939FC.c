// sub_080939FC at 0x080939FC (thumb)

undefined4 sub_080939FC(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(uint *)(param_1 + 0xb8) = *(uint *)(param_1 + 0xb8) | 1;
    *(undefined *)(param_1 + 0x12) = 0x28;
    sub_08017700(param_1,0x8e00);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080177F4(param_1);
  if (*(int *)(param_1 + 0x54) < *(int *)(DAT_0202f5c0 + 0x54)) {
    uVar2 = 4;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
      uVar3 = sub_08093538(param_1);
      if ((uVar3 & 0xff) == 2) {
        *(undefined *)(param_1 + 0xd) = 3;
        *(undefined *)(param_1 + 0xe) = 0;
      }
      else {
        uVar4 = 0xffffffff;
        if (*(int *)(param_1 + 0x54) <
            (int)(*(int *)(DAT_0202f5c0 + 0x54) + -0x6000 + (uVar3 & 0xff) * 0xc000)) {
          uVar4 = 1;
        }
        cVar1 = sub_080935B0(param_1,uVar4);
        if ((cVar1 == '\0') && (cVar1 = sub_08093500(param_1,uVar4), cVar1 != '\0')) {
          *(undefined *)(param_1 + 0xd) = 2;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        else {
          *(undefined *)(param_1 + 0xd) = 3;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
    }
    cVar1 = sub_0809357C(param_1,1);
    if (cVar1 != '\0') {
      return in_lr;
    }
    uVar2 = 5;
  }
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  return in_lr;
}

