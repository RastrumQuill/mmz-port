// sub_08033980 at 0x08033980 (thumb)

undefined4 sub_08033980(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  undefined4 in_lr;
  char local_10 [4];
  
  pcVar3 = (char *)(param_1 + 0x102);
  if (*pcVar3 == '\0') {
    sub_0801CF00(param_1,0xf00);
    sub_0803C490(param_1,1);
    *pcVar3 = *pcVar3 + '\x01';
  }
  else {
    cVar1 = sub_08039FE4(param_1,local_10);
    if ((cVar1 != '\0') && (local_10[0] == '\x01')) {
      *(char *)(param_1 + 0x146) = *(char *)(param_1 + 0x146) + '\x01';
    }
    sub_0803A3BC(param_1,0xf00);
  }
  if (('\x03' < *(char *)(param_1 + 0x71)) && (1 < *(byte *)(param_1 + 0x146))) {
    if (((*(uint *)(param_1 + 600) & 0x40) == 0) || (cVar1 = sub_0803A698(param_1), cVar1 == '\0'))
    {
      if (((*(uint *)(param_1 + 600) & 0x80) == 0) || (cVar1 = sub_0803A6C0(param_1), cVar1 == '\0')
         ) {
        *(undefined *)(param_1 + 0x101) = 3;
        *(undefined *)(param_1 + 0x102) = 0;
        sub_08033AB0(param_1);
      }
      else {
        *(undefined *)(param_1 + 0x101) = 6;
        *(undefined *)(param_1 + 0x102) = 0;
        sub_08033CAC(param_1);
      }
    }
    else {
      *(undefined *)(param_1 + 0x101) = 5;
      *(undefined *)(param_1 + 0x102) = 0;
      sub_08033C38(param_1);
    }
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0x100) = 0;
    uVar2 = sub_0802B7C0(param_1);
    sub_0801CF00(param_1,uVar2);
  }
  return in_lr;
}

