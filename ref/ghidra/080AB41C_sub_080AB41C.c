// sub_080AB41C at 0x080AB41C (thumb)

undefined4 sub_080AB41C(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  sub_0809C980();
  switch(*(undefined *)(param_1 + 0xd)) {
  case 0:
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 0x60;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x20;
    puVar4 = (ushort *)(param_1 + 0xc6);
    *(ushort *)(param_1 + 0x48) = *puVar4;
    *(ushort *)(param_1 + 0x4a) = *puVar4;
    uVar1 = *puVar4;
    *puVar4 = uVar1 + 1;
    if (0x100 < (ushort)(uVar1 + 1)) {
      sub_0809C6C4(param_1);
      sub_0809C930(param_1,0);
      sub_0809C980(param_1);
      *(undefined *)(param_1 + 0x44) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 4;
      sub_080055FC(param_1 + 0x74,&DAT_082b65d0,param_1 + 0x4c,0x80);
      *(int *)(param_1 + 0xb4) = param_1;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      sub_080AAC78(param_1,3);
    }
    break;
  case 1:
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    sub_0809C930(param_1,1);
    sub_0809C980(param_1);
    *(undefined *)(param_1 + 0x13) = 0;
    goto LAB_080ab538;
  case 2:
    *(int *)(param_1 + 0x50) =
         *(int *)(param_1 + 0xc0) +
         ((short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x13) + 0xc0 & 0xff] + 0xff) * -0x20;
    *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    iVar3 = *(int *)(param_1 + 0x18);
    bVar2 = 1;
    goto LAB_080ab530;
  case 3:
    iVar3 = *(int *)(param_1 + 0x18);
    bVar2 = 2;
LAB_080ab530:
    if ((bVar2 & *(byte *)(iVar3 + 9)) != 0) {
LAB_080ab538:
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
    break;
  case 4:
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -0x100;
  }
  return in_lr;
}

