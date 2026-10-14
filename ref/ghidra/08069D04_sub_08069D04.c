// sub_08069D04 at 0x08069D04 (thumb)

undefined4 sub_08069D04(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 4;
    *(undefined *)(*(int *)(param_1 + 0xc4) + 0xde) = 0;
  }
  switch(*(undefined *)(param_1 + 0xf)) {
  case 0:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_080033F0(param_1 + 0x6c,0x11);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 4;
    }
    break;
  case 1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    if (*(char *)(param_1 + 0x10) == '\0') {
      sub_080033F0(param_1 + 0x6c,0xf);
    }
    else {
      sub_080033F0(param_1 + 0x6c,0x10);
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
      *(undefined *)(param_1 + 0x45) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    }
    *(undefined *)(param_1 + 0x12) = 0x16;
    goto LAB_08069dfc;
  case 2:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    if (*(char *)(param_1 + 0x10) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xf) + '\x02';
      goto LAB_08069e26;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x05';
      *(undefined *)(param_1 + 0x12) = 0x28;
      break;
    }
LAB_08069dfc:
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    break;
  case 3:
    if (*(byte *)(*(int *)(param_1 + 0x24) + 0xc) < 2) break;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x03';
      *(undefined *)(param_1 + 0x12) = 9;
      break;
    }
    cVar1 = *(char *)(param_1 + 0xf) + '\x01';
LAB_08069e26:
    *(char *)(param_1 + 0xf) = cVar1;
    *(undefined *)(param_1 + 0x12) = 10;
    break;
  case 4:
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar2 = *(int *)(param_1 + 0x4c) + -0x200;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x4c) + 0x200;
    }
    *(int *)(param_1 + 0x4c) = iVar2;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 1;
    }
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
    sub_080399A0(*(undefined4 *)(param_1 + 0x20),2,0);
    goto LAB_08069eda;
  case 6:
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar2 = *(int *)(param_1 + 0x4c) + -0x200;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x4c) + 0x200;
    }
    *(int *)(param_1 + 0x4c) = iVar2;
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x12) = 2;
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) break;
LAB_08069eda:
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

