// sub_080A7D38 at 0x080A7D38 (thumb)

undefined4 sub_080A7D38(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (1 < *(byte *)(iVar3 + 0xc)) {
    sub_080B919C(param_1 + 0x54,3);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0x32;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_080a7d94_caseD_1:
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == '\0') {
LAB_080a7e9c:
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
switchD_080a7d94_caseD_5:
    return in_lr;
  case 1:
    goto switchD_080a7d94_caseD_1;
  case 2:
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xee;
    *(undefined *)(param_1 + 0x22) = 1;
    sub_08006E08(param_1 + 0x74,&DAT_0834510c);
    sub_080127E4(param_1,0x6900);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined *)(param_1 + 0x12) = 0x5a;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 3:
    iVar2 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
    if (iVar2 + 0x500U < 0xa00) {
      *(int *)(param_1 + 0x5c) = iVar2 + 0x20;
      *(uint *)(param_1 + 0x5c) = iVar2 + 0x20 + (uint)*(byte *)(param_1 + 0xb5) * -0x40;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    if (*(byte *)(param_1 + 0xb5) == 0) {
      if (*(int *)(param_1 + 0x54) <= *(int *)(iVar3 + 0xc0) + 0x11000) {
LAB_080a7e78:
        if (*(char *)(param_1 + 0x12) != '\0') {
          return in_lr;
        }
      }
    }
    else if (*(int *)(iVar3 + 0xc0) + -0x11000 <= *(int *)(param_1 + 0x54)) goto LAB_080a7e78;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    sub_08006E08(param_1 + 0x74,&DAT_0834510c);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 1;
    goto LAB_080a7e9c;
  case 4:
    if (*(char *)(param_1 + 0xb5) == '\0') {
      if ((*(uint *)(iVar3 + 0xb4) & 0x20) != 0) {
        *(undefined *)(param_1 + 0xd) = 0xe;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    else if ((*(uint *)(iVar3 + 0xb4) & 0x10) != 0) {
      *(undefined *)(param_1 + 0xd) = 0xe;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  default:
    goto switchD_080a7d94_caseD_5;
  }
}

