// sub_080486AC at 0x080486AC (thumb)

undefined4 sub_080486AC(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0xa51e);
    *(undefined *)(*(int *)(param_1 + 0xcc) + 0x11) = 1;
    iVar2 = sub_08079798(param_1,2,0);
    *(int *)(param_1 + 0xcc) = iVar2;
    if (*(int *)(param_1 + 0xb4) != 0) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        local_20 = *(int *)(param_1 + 0x54) + -0xa00;
        uVar3 = 0xfffffd00;
      }
      else {
        local_20 = *(int *)(param_1 + 0x54) + 0xa00;
        uVar3 = 0x300;
      }
      local_1c = *(int *)(param_1 + 0x58) + -0x4000;
      iVar2 = 0;
      do {
        sub_080B87E0(param_1,&local_20,2,(uint)(iVar2 << 0x1c) >> 0x18);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x10);
      sub_08022EA8(*(int *)(param_1 + 0xb4),0,uVar3,0xfffffc80,0,0x40,0x1c,0);
      sub_08015518(8,param_1 + 0x54);
    }
    sub_080032EC(0x35);
    *(undefined *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080128D4(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

