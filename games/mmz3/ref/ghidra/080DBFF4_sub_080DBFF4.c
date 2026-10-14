// sub_080DBFF4 at 0x080DBFF4 (thumb)

undefined4 sub_080DBFF4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_08017700(param_1,0xe202);
    *(undefined *)(param_1 + 0x12) = 0x20;
    sub_080B5F14(param_1 + 0x54,&DAT_0836dd8c,0,0);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  sub_080177F4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    local_18 = *(int *)(param_1 + 0x54) + 0xb00;
    local_14 = *(int *)(param_1 + 0x58) + -0x900;
    sub_080B5F14(&local_18,&DAT_0836dd38,0,0);
    local_18 = *(int *)(param_1 + 0x54) + 0x1700;
    local_14 = *(int *)(param_1 + 0x58) + -0x900;
    sub_080B5F14(&local_18,&DAT_0836dd54,0,0);
    local_18 = *(int *)(param_1 + 0x54) + -0x400;
    local_14 = *(int *)(param_1 + 0x58) + 0x100;
    sub_080B5F14(&local_18,&DAT_0836dd70,0,0);
    local_18 = *(int *)(param_1 + 0x54) + 0xa00;
    local_14 = *(int *)(param_1 + 0x58) + -0x800;
    sub_080B2484(1,&local_18);
    if (DAT_0202e48c < *(int *)(param_1 + 0x58)) {
      sub_0800471C(0x31);
    }
    else {
      sub_0800471C(0x2a);
    }
    bVar1 = *(byte *)(param_1 + 0x11);
    if (bVar1 < 0xb4) {
      sub_080E0A70(bVar1,param_1 + 0x54,1);
    }
    else if (bVar1 == 0xfe) {
      sub_08024FE4(4,param_1 + 0x54);
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  }
  return in_lr;
}

