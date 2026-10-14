// sub_08061DA4 at 0x08061DA4 (thumb)

undefined4 sub_08061DA4(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  sub_080489E4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,10);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  iVar2 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
  *(int *)(param_1 + 0x50) = iVar2 + 0x800;
  iVar2 = *(int *)(DAT_0202286c + 0x4c);
  *(bool *)(param_1 + 0x44) = *(int *)(param_1 + 0x4c) < iVar2;
  if (*(int *)(param_1 + 0x4c) < iVar2) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar2 = param_1 + 0x4c;
  sub_080055FC(param_1 + 0x74,&DAT_082b05d8,iVar2,0x14);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_08061EF8(param_1);
  sub_080914D4(param_1,iVar2,0,0);
  sub_080914D4(param_1,iVar2,0,1);
  sub_080914D4(param_1,iVar2,0,2);
  sub_080914D4(param_1,iVar2,0,3);
  sub_080914D4(param_1,iVar2,0,4);
  local_1c = *(undefined4 *)(param_1 + 0x4c);
  local_18 = sub_08008360(local_1c,*(undefined4 *)(param_1 + 0x50));
  sub_0809139C(&local_1c);
  return in_lr;
}

