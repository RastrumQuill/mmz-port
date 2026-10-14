// sub_08064DC8 at 0x08064DC8 (thumb)

undefined4 sub_08064DC8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  int local_4c [4];
  int local_3c [4];
  short asStack_2c [4];
  short asStack_24 [4];
  
  local_4c[0] = 0;
  local_4c[1] = 0x1000;
  local_4c[2] = 0x1000;
  local_4c[3] = 0x1000;
  local_3c[0] = -0x1000;
  local_3c[1] = 0xffffec00;
  local_3c[2] = 0xffffe800;
  local_3c[3] = 0xffffeb00;
  sub_080C8D70(asStack_2c,&DAT_080c92f8,8);
  sub_080C8D70(asStack_24,&DAT_080c9300,8);
  if (*(char *)(param_1 + 0x11) == '\x04') {
    sub_08048A54(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080033F0(param_1 + 0x6c,2);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x1000;
    *(undefined4 *)(param_1 + 0x58) = 0x380;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined *)(param_1 + 0x44) = 1;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      *(undefined *)(param_1 + 0x1f) = 0x40;
      iVar2 = -0x100;
    }
    else {
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined *)(param_1 + 0x1f) = 0xc0;
      iVar2 = 0x100;
    }
  }
  else {
    sub_080489E4(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
    sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x11) + '\x02');
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    bVar1 = *(byte *)(param_1 + 0x11);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + local_3c[bVar1];
    *(int *)(param_1 + 0x58) = (int)asStack_24[bVar1];
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) - local_4c[*(byte *)(param_1 + 0x11)];
      iVar2 = -(int)asStack_2c[*(byte *)(param_1 + 0x11)];
    }
    else {
      *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + local_4c[bVar1];
      iVar2 = (int)asStack_2c[bVar1];
    }
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&UNK_082b0908 + (uint)*(byte *)(param_1 + 0x11) * 0x1c,param_1 + 0x4c,
               0x100);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  sub_08064D84(param_1);
  return in_lr;
}

