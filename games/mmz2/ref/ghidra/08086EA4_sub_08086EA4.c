// sub_08086EA4 at 0x08086EA4 (thumb)

undefined4 sub_08086EA4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 0x28);
  switch(*(undefined *)(param_1 + 0xe)) {
  case 0:
    *(undefined *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 1:
    *(undefined *)(param_1 + 0x13) = 0;
    sub_080127E4(param_1,*(undefined2 *)(&DAT_08341582 + (uint)*(byte *)(param_1 + 0x12) * 2));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
switchD_08086ec0_caseD_2:
    sub_08012A14(param_1);
    if ((byte)(*(char *)(param_1 + 0x73) - 3U) < 2) {
      bVar1 = *(char *)(param_1 + 0x13) + 1;
      *(byte *)(param_1 + 0x13) = bVar1;
      uVar3 = (uint)*(byte *)(param_1 + 0x12);
      if (((byte)(&DAT_0834158a)[uVar3] <= bVar1) ||
         ((((*(uint *)(iVar4 + 0xb4) & 0x100) != 0 && (uVar3 == 3)) && (0x16 < bVar1)))) {
        *(char *)(param_1 + 0x12) = (char)(uVar3 + 1);
        if ((uVar3 + 1 & 0xff) == 3) {
          if ((*(uint *)(iVar4 + 0xb4) & 0x80) == 0) {
            local_20 = *(int *)(param_1 + 0x54) + -0x1d00;
            local_1c = *(int *)(param_1 + 0x58) + 0xb00;
            sub_080A6A1C(iVar4,&local_20,0);
            local_20 = *(int *)(param_1 + 0x54) + -0x2c00;
            local_1c = *(undefined4 *)(iVar4 + 0xc4);
            sub_080CBD10(iVar4,&local_20,0);
            local_20 = *(int *)(param_1 + 0x54) + 0x1d00;
            local_1c = *(int *)(param_1 + 0x58) + 0xb00;
            sub_080A6A1C(iVar4,&local_20,1);
            local_20 = *(int *)(param_1 + 0x54) + 0x2c00;
            local_1c = *(undefined4 *)(iVar4 + 0xc4);
            sub_080CBD10(iVar4,&local_20,1);
            sub_080032EC(0x105);
          }
          else {
            local_28 = *(int *)(param_1 + 0x54) + -0x1d00;
            local_24 = *(int *)(param_1 + 0x58) + 0xb00;
            sub_080A6B28(iVar4,&local_28,0);
            local_28 = *(int *)(param_1 + 0x54) + -0x2c00;
            local_24 = *(undefined4 *)(iVar4 + 0xc4);
            sub_080B9060(iVar4,&local_28);
            local_28 = *(int *)(param_1 + 0x54) + 0x1d00;
            local_24 = *(int *)(param_1 + 0x58) + 0xb00;
            sub_080A6B28(iVar4,&local_28,1);
            local_28 = *(int *)(param_1 + 0x54) + 0x2c00;
            local_24 = *(undefined4 *)(iVar4 + 0xc4);
            sub_080B9060(iVar4,&local_28);
            sub_080032EC(0x105);
          }
        }
        if (*(byte *)(param_1 + 0x12) < 4) {
LAB_080870b4:
          cVar2 = '\x01';
        }
        else {
          if ((*(uint *)(iVar4 + 0xb4) & 0x100) != 0) {
            *(undefined *)(param_1 + 0xd) = 8;
            *(undefined *)(param_1 + 0xe) = 0;
            return in_lr;
          }
          cVar2 = *(char *)(param_1 + 0xe) + '\x01';
        }
        *(char *)(param_1 + 0xe) = cVar2;
      }
    }
switchD_08086ec0_caseD_5:
    return in_lr;
  case 2:
    goto switchD_08086ec0_caseD_2;
  case 3:
    sub_080127E4(param_1,0xac08);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  case 4:
    sub_08012A14(param_1);
    if ((*(uint *)(iVar4 + 0xb4) & 0x80) != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0xd) = 3;
    goto LAB_080870b4;
  default:
    goto switchD_08086ec0_caseD_5;
  }
}

