// sub_080AC348 at 0x080AC348 (thumb)

undefined4 sub_080AC348(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 in_lr;
  
  sub_080128D4();
  if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      sub_08006DE4(param_1 + 0x74,&DAT_08345968,param_1 + 0x54,0);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = 0;
      *(int *)(param_1 + 0x5c) = (*(int *)(param_1 + 0x5c) * -3) / 2;
      *(int *)(param_1 + 0x60) = (*(int *)(param_1 + 0x60) * -3) / 2;
      *(undefined *)(param_1 + 0xd) = 1;
    }
    else if (*(int *)(param_1 + 0x60) < 0) {
      sub_080032EC(0x2b);
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
    }
    else {
      sub_080032EC(0x2b);
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
    }
  }
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 0x400100) == 0) {
    if ((*puVar4 & 4) == 0) {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar1;
      if (cVar1 != '\0') {
        sVar2 = sub_08008CFC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        if (sVar2 != 0) {
          if (*(char *)(param_1 + 0x13) != '\0') goto LAB_080ac458;
          if ((*(int *)(param_1 + 0x5c) == 0) && (*(char *)(param_1 + 0x10) == '\x01')) {
            uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
            *(undefined4 *)(param_1 + 0x58) = uVar3;
            sub_08098414(param_1 + 0x54,*(undefined4 *)(param_1 + 0x60),0);
            sub_08098414(param_1 + 0x54,*(undefined4 *)(param_1 + 0x60),0x80);
            *(undefined4 *)(param_1 + 0xc) = 2;
            *(undefined4 *)(param_1 + 0x14) =
                 *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
            *puVar4 = 0;
            *(undefined4 *)(param_1 + 0x90) = 0;
            *(undefined *)(param_1 + 0x94) = 0;
            *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
          }
          else {
            *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
            uVar3 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
            *(undefined4 *)(param_1 + 0x58) = uVar3;
            *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
          }
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
        return in_lr;
      }
      sub_080AC60C(3,param_1 + 0x54);
    }
    else {
      *puVar4 = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      sub_080AC60C(2,param_1 + 0x54);
    }
  }
  else {
    *puVar4 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_080AC60C(3,param_1 + 0x54);
  }
LAB_080ac458:
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 8);
  return in_lr;
}

