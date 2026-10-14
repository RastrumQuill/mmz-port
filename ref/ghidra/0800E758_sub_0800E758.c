// sub_0800E758 at 0x0800E758 (thumb)

void sub_0800E758(int param_1)

{
  undefined4 *puVar1;
  
  switch(*(undefined *)(param_1 + 8)) {
  case 0:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = (undefined4 *)&DAT_082a7ff4;
    break;
  default:
    goto switchD_0800e76c_caseD_1;
  case 2:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = (undefined4 *)&DAT_082acbf8;
    break;
  case 3:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = (undefined4 *)&DAT_082aeadc;
    break;
  case 4:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = &DAT_082b17b0;
    break;
  case 5:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    puVar1 = &DAT_082b31bc;
    break;
  case 6:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = (undefined4 *)&DAT_082b5184;
    break;
  case 7:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = &DAT_082b6d68;
    break;
  case 8:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    puVar1 = &DAT_082b6e70;
  }
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(puVar1[*(byte *)(param_1 + 9)] + 0xc);
switchD_0800e76c_caseD_1:
  return;
}

