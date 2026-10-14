// sub_080736CC at 0x080736CC (thumb)

undefined4 sub_080736CC(int param_1)

{
  char cVar1;
  undefined uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x01') {
    return in_lr;
  }
  cVar1 = sub_08073758(param_1,0x3800,0x6000);
  if (cVar1 == '\0') {
    cVar1 = sub_08073758(param_1,0x7000,0x6000);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0xbb) = *(undefined *)(param_1 + 0xba);
      *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
      return in_lr;
    }
    if (*(short *)(param_1 + 0xba) == 0x303) {
      uVar2 = 4;
      goto LAB_08073726;
    }
  }
  else if (*(char *)(param_1 + 0xba) != '\x04') {
    uVar2 = 4;
    goto LAB_08073726;
  }
  uVar2 = 3;
LAB_08073726:
  *(undefined *)(param_1 + 0xd) = uVar2;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(undefined *)(param_1 + 0xbb) = *(undefined *)(param_1 + 0xba);
  *(undefined *)(param_1 + 0xba) = *(undefined *)(param_1 + 0xd);
  return in_lr;
}

