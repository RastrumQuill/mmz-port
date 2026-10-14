// sub_0807AD60 at 0x0807AD60 (thumb)

undefined4 sub_0807AD60(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    sub_080128D4(param_1);
    if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
      sub_08003338((int)*(short *)(param_1 + 0xc0));
      *(short *)(param_1 + 0xc0) = -1;
      sub_08006E08(param_1 + 0x74,&DAT_083400f0);
      DAT_0202ebbc = DAT_0202ebbc & 0xfd;
      *(undefined *)(param_1 + 0x12) = 0x40;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      uVar2 = sub_080032EC(0x54);
      *(undefined2 *)(param_1 + 0xc0) = uVar2;
      sub_08006E08(param_1 + 0x74,&DAT_083400c0);
      DAT_0202ebbc = DAT_0202ebbc | 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0807AE0C(param_1);
  }
  return in_lr;
}

