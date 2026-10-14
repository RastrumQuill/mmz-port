// sub_0806DCC4 at 0x0806DCC4 (thumb)

undefined4 sub_0806DCC4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar2 = sub_08065A24(param_1);
    if (iVar2 == 0) {
      if (DAT_0202f068 == '\x01') {
        *(undefined *)(param_1 + 0xb6) = 0;
      }
      else {
        cVar1 = DAT_0202f068;
        if (DAT_0202f068 != '\x02') {
          if (DAT_0202f068 == '\x03') {
            cVar1 = '\x01';
          }
          else {
            cVar1 = *(char *)(param_1 + 0x10);
          }
        }
        *(char *)(param_1 + 0xb6) = cVar1;
      }
      sub_0806DE6C(param_1);
      sub_0806DE70(param_1);
      sub_0806DEB4(param_1);
      sub_0806DEB8(param_1);
      if (*(int *)(param_1 + 0xbc) == 0) {
        sub_080EF118(param_1,*(undefined4 *)(&DAT_0833e818 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
      else {
        iVar2 = sub_0801E4D8();
        if (iVar2 != 0) {
          *(int *)(param_1 + 0xbc) = 0;
          sub_08006E08(param_1 + 0x74,&DAT_0833e86c);
        }
      }
    }
    else {
      sub_080127E4(param_1,*(undefined2 *)(&DAT_0833ea08 + (uint)*(byte *)(param_1 + 0xb5) * 2));
      sub_080128D4(param_1);
      sub_08006E08(param_1 + 0x74,&DAT_0833e86c);
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0806DDC4(param_1);
  }
  return in_lr;
}

