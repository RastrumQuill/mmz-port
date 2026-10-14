// sub_0803229C at 0x0803229C (thumb)

undefined4 sub_0803229C(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined *)(param_1 + 0x149) = 0xff;
  *(undefined *)(param_1 + 0x14e) = 0xff;
  cVar1 = *(char *)(param_1 + 0xfa);
  if (cVar1 != '\x02') {
    if (cVar1 == '\b') {
      *(char *)(param_1 + 0xfa) = '\x02';
    }
    else {
      if (*(char *)(param_1 + 0xc0) == '\x02') {
        *(char *)(param_1 + 0xc0) = cVar1;
      }
      else {
        if (*(char *)(param_1 + 0xc1) != '\x02') goto LAB_08032304;
        *(char *)(param_1 + 0xc1) = cVar1;
      }
      pcVar2 = (char *)(param_1 + 0xf8);
      cVar1 = *pcVar2;
      if (cVar1 != '\x02') {
        pcVar2 = (char *)(param_1 + 0xf9);
        cVar1 = '\x02';
      }
      *pcVar2 = cVar1;
    }
  }
LAB_08032304:
  if (*(byte *)(param_1 + 199) < 4) {
    if (((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) {
      *(undefined *)(param_1 + 0xe) = 1;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0x100) = 0;
      sub_08032374(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xe) = 2;
      *(undefined *)(param_1 + 0xf) = 0;
      *(undefined *)(param_1 + 0x100) = 0;
      sub_08032424(param_1);
    }
  }
  else {
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x100) = 0;
    sub_08032374(param_1);
  }
  return in_lr;
}

